/* FUN_100b9438 @ 0x100b9438 */

void FUN_100b9438(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_100b9448;
  DAT_100b9448[2] = param_2;
  puVar1[3] = param_2;
  *puVar1 = param_1;
  puVar1[1] = 0;
  return;
}

