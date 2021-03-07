About
=====

Hashes in the `Mys programming language`_.

Project: https://github.com/mys-lang/package-hash

Examples
========

SHA-1
-----

Single buffer.

.. code-block:: python

   from hash.sha1 import sha1

   def main():
       print(sha1(b"The quick brown fox jumps over the lazy dog"))

Multiple (or single) buffers.

.. code-block:: python

   from hash.sha1 import Sha1

   def main():
       hasher = Sha1()
       hasher.update(b"The quick brown fox jumps")
       hasher.update(b" over the lazy dog")
       print(hasher.digest())

Functions and types
===================

SHA-1
-----

.. mysfile:: src/sha1.mys

.. _Mys programming language: https://mys.readthedocs.io/en/latest/
