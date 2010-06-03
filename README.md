json_builder for C++
======

Simple JSON Builder for C++.
Make JSON String from nested std::map and std::vector.

Dependencies
------------

* boost::any
* boost::regex

Setup
-----

Clone gyaazz source-code.

    %git clone git://github.com/shokai/json_builder-cpp.git

Install Dependencies

    # Mac OS X
    % sudo port install boost

    # Ubuntu / Debian
    % sudo apt-get install libboost-all-dev
      or
    % sudo apt-get install libboost-dev libboost-regex-dev


Run Samples
-----------

    % cd samples
    % make
    % ./sample
    % ./nested-array

    # parse
    % ./sample > out.json
    % ruby json-parse.rb out.json


Author
------

shokai
    Sho Hashimoto
    hashimoto@shokai.org
    http://shokai.org



LICENSE
-------

(The MIT License)

Copyright (c) 2010 Sho Hashimoto

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.