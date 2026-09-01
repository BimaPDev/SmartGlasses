/* FUN_100be2c4 @ 0x100be2c4 */

undefined4 FUN_100be2c4(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  short local_2c;
  char local_2a;
  
  iVar1 = FUN_10131bde(param_1,&local_2c);
  if (((iVar1 < 0) || (local_2c != 0x101)) || (local_2a != '\0')) {
    uVar2 = 0;
  }
  else {
    FUN_100a5b78(DAT_100be320 | (DAT_100be31c - DAT_100be318) * 0x20 & 0xff00U,DAT_100be328,
                 DAT_100be324,*param_2,param_2[1],param_2[2],param_2[3]);
    uVar2 = 1;
  }
  return uVar2;
}

