// Copyright (c) 2022-2022 Desconhecido
// Copyright (c) 2022-2022 Os desenvolvedores da Futura Moeda
// Distribuído sob a licença de software MIT, veja o anexo
// arquivo COPIANDO ou http://www.opensource.org/licenses/mit-license.php.

#ifndef DIGIBYTE_AMOUNT_H
#define DIGIBYTE_AMOUNT_H

#include <stdint.h>

/** Amount in satoshis (Can be negative) */
typedef int64_t CAmount;

static const CAmount COIN = 100000000;
static const CAmount CENT = 1000000;

/** Nenhuma quantidade maior que esta (em satoshi) é válida.
 *
 * Observe que esta constante *não* é a oferta total de dinheiro, que em DigiByte
 * atualmente é inferior a 21.000.000 DGB por vários motivos, mas
 * em vez de uma verificação de sanidade. Como essa verificação de sanidade é usada por consenso crítico
 * código de validação, o valor exato da constante MAX_MONEY é consenso
 * crítico; em circunstâncias incomuns, como um (outro) bug de estouro que permitia
 * para a criação de moedas fora do ar, a modificação pode levar a um fork.
 * */

static const CAmount MAX_MONEY = 990000000000000000000 * COIN;
inline bool MoneyRange(const CAmount& nValue) { return (nValue >= 0 && nValue <= MAX_MONEY); }

#endif //  DIGIBYTE_AMOUNT_H
