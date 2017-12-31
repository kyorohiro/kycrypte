sha1FromString = Module.cwrap('mbedtls_sha1', '', ['string','number','number']);
sha1FromPointer = Module.cwrap('mbedtls_sha1', '', ['number','number','number']);