# Erlang NIF bindings for Houdini Engine.
# WORK IN PROGRESS

## Goals of this project.

* To be able to run [Houdini Engine](http://www.sidefx.com/index.php?option=com_content&task=blogcategory&id=227&Itemid=381) instance (and be able to perform asset instantiation, cooking, etc.) on an [Erlang](http://www.erlang.org/) (as well as [Elixir](http://elixir-lang.org)) node.
* Create an HTTP RESTful service based on this NIF.
* Create a WebGL client to interact with the RESTful service.

## Approach.
* Once dependencies are fetched, Rebar in pre-build step will compile a xxhash executable from util/xxhash.c file. This executable is used to compute hashes of atoms and is used throughout generated code.
* An Elixir script util/hapi.ex will parse HAPI.h and HAPI_Common.h (at location specified in rebar.config).
* It does it by running preprocessor of specified compiler (in rebar.config) on util/hapi.c and parsing expanded output.
* It will construct environment object, containing type, enum, struct and function tables.
* Once this is complete, it will iterate these tables and will generate:
  * Erlang NIF source c files in c_src/enums for converting HAPI enums to Erlang atoms and vice versa.
  * Erlang NIF header h file c_src/hapi_enums_nif.h with all NIF c enum conversion signatures.
  * Erlang NIF source c files in c_src/records for converting HAPI structs to Erlang records and vice versa.
  * Erlang NIF header h file c_src/hapi_records_nif.h with all NIF c struct conversion signatures.
  * Erlang header hrl files in src/records which map to HAPI structs.
* After generation step is complete, Rebar will compile HAPI NIF dynamic library which can be used within Erlang.

## Status.
- [x] Generation of HAPI enum c translation stubs.
- [ ] Generation of Erlang enum mappings. Not required?
- [x] Generation of HAPI struct c translation stubs.
- [x] Generation of Erlang records corresponding to HAPI structs.
- [ ] Generation of HAPI function c stubs - Work in progress.
- [x] Generation of Erlang function stubs - Work in progress.
- [x] Generation of NIF Export c table.
- [ ] Adding tests.
- [x] Working Mac OS X port.
- [ ] Working Linux port.
- [ ] Working Windows port.
- [ ] Adding full Elixir / Mix support.

## Before building, required steps.
* Will build only on Mac OS X right now.
  * If you want to build on another platform you will need to patch rebar.config .
  * Stubs will theoretically generate on Windows. However rebar.config is missing Windows compilation instructions. So nothing will happen.
  * Same with Linux.
* Install latest build of [Houdini 14](http://www.sidefx.com/index.php?option=com_download&Itemid=208) .
  * If you choose to install to a custom location, you may need to patch rebar.config .
* Install [Erlang](http://www.erlang.org/download.html) (build it yourself or install pre-built).
  * This NIF library relies on enif_schedule_nif, which requires a fairly recent Erlang OTP, for example OTP 17.5 .
  * If you choose to install to a custom location, you may need to patch rebar.config .
* Install [Rebar](https://github.com/rebar/rebar) (build it yourself or install through something like [Homebrew](http://brew.sh/)).
* Install [Elixir](http://elixir-lang.org/) (build it yourself or install through [Homebrew](http://brew.sh/) or install pre-packaged).

## Building.
Use Rebar:

```
rebar get-deps
rebar compile
```
To clean:
```
rebar clean
```

## Running.  

Run erl:

```
> code:add_path("ebin").
true
```
## License.

* Distributed under the [MS-RL License.](http://opensource.org/licenses/MS-RL)
* **To further explain the license:**
  * **You cannot re-license any files in this project.**
  * **That is, they must remain under the [MS-RL license.](http://opensource.org/licenses/MS-RL)**
  * **Any other files you add to this project can be under any license you want.**
  * **You cannot use any of this code in a GPL project.**
  * Otherwise you are free to do pretty much anything you want with this code.

## Notes.

* This is a personal project. Use at your own risk. No warranties.
* A lot of code is autogenerated and will be cleaned up.
* Please report bugs.
