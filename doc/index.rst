|discord|_
|test|_
|stars|_

About
=====

Hashes in the `Mys programming language`_.

Project: https://github.com/mys-lang/package-hash

Examples
========

SHA-1
-----

Single buffer
^^^^^^^^^^^^^

The code:

.. code-block:: mys

   from hash.sha1 import sha1

   func main():
       print(sha1(b"The quick brown fox jumps over the lazy dog"))

Build and run:

.. code-block:: myscon

   ❯ mys run
    ✔ Reading package configuration (0 seconds)
    ✔ Building (0.51 seconds)
   b"\x2f\xd4\xe1\xc6\x7a\x2d\x28\xfc\xed\x84\x9e\xe1\xbb\x76\xe7\x39\x1b\x93\xeb\x12"

Multiple (or single) buffers
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The code:

.. code-block:: mys

   from hash.sha1 import Sha1

   func main():
       hasher = Sha1()
       hasher.update(b"The quick brown fox jumps")
       hasher.update(b" over the lazy dog")
       print(hasher.digest())

Build and run:

.. code-block:: myscon

   ❯ mys run
    ✔ Reading package configuration (0 seconds)
    ✔ Building (0.51 seconds)
   b"\x2f\xd4\xe1\xc6\x7a\x2d\x28\xfc\xed\x84\x9e\xe1\xbb\x76\xe7\x39\x1b\x93\xeb\x12"

API
===

SHA-1
-----

.. mysfile:: src/sha1.mys

.. |discord| image:: https://img.shields.io/discord/777073391320170507?label=Discord&logo=discord&logoColor=white
.. _discord: https://discord.gg/GFDN7JvWKS

.. |test| image:: https://github.com/mys-lang/package-hash/actions/workflows/pythonpackage.yml/badge.svg
.. _test: https://github.com/mys-lang/package-hash/actions/workflows/pythonpackage.yml

.. |stars| image:: https://img.shields.io/github/stars/mys-lang/package-hash?style=social
.. _stars: https://github.com/mys-lang/package-hash

.. _Mys programming language: https://mys-lang.org
