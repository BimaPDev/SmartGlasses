/* FUN_1010e930 @ 0x1010e930 */

undefined4 FUN_1010e930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_1010e954;
  *(undefined4 *)(DAT_1010e954 + 0x748) = param_4;
  *(undefined4 *)(iVar1 + 0x73c) = param_1;
  *(undefined4 *)(iVar1 + 0x740) = param_2;
  *(undefined4 *)(iVar1 + 0x744) = param_3;
  *(undefined4 *)(iVar1 + 0x738) = 1;
  *(undefined4 *)(iVar1 + 0x730) = 1;
  return 0;
}

