# RESTEasy CHANGELOG

## 0.2.1

In-memory datastore

- Added proper thread safety to in-memory datastore.
- Added tests for threading.
- Fixed weak reference warnings related to the store->server chain by changing the controller API.
- Fixed static analyzer warnings around weak references.
- A few other minor cleanup activities.

## 0.2.0

First Release to Cocoapods

- Added min/max latency handling and tests.
- Put all the controller requests into one internal method on the server to prevent duplication of the timing delay code.
- Added documentation for the latency configuration feature.

## 0.1.6

Sqlite

- Sqlite store can now perform all CRUD operations and is passing the same tests as the in-memory store.

## 0.1.5

Subspec refactor

- Refactored the project layout to better handle subspec structure.
- Move the core into its own subspec.

## 0.1.4

Subspec fix

- Resolving header depedencies in the subspec build.

## 0.1.3

Subspec

- Sqlite persistence is now in a subspec for those who don't need it. 
- Some project refactoring to support this.

## 0.1.2

Example app

- Got the basic example app hooked up and working.
- Not the best sample code but it does demonstrate the functionality exactly as intended.

## 0.1.1

Podspec passing lint.

- Fixed the podspec issues to successfully lint.
- Added an explicit numeric cast for a format string.

## 0.1.0

Test release to lint Cocoapod spec.
