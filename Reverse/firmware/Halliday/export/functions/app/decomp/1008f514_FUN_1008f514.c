/* FUN_1008f514 @ 0x1008f514 */

uint FUN_1008f514(uint param_1)

{
  return (param_1 & 0xff) >> 3 | DAT_1008f52c & param_1 >> 8 | param_1 >> 5 & 0x7e0;
}

