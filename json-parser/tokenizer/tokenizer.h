//
// Created by danysmall on 5/7/23.
//

#include "../context/context.h"
#include "../json-token.h"
#include "../../json-node/json.h"

#ifndef DTOCONSTRUCTOR_TOKENIZER_H
#define DTOCONSTRUCTOR_TOKENIZER_H

JsonToken* jsonTokenFromJsonString(char* source);
JsonNode* jsonNodeFromToken(JsonToken* token);


#endif //DTOCONSTRUCTOR_TOKENIZER_H
