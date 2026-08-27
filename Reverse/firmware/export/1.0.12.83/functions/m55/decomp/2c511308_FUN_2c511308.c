/* FUN_2c511308 @ 0x2c511308 */

void FUN_2c511308(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c50f968();
  if (iVar1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      iVar1 = param_1 + 0x2c2c + param_3 * 0xc;
      uVar2 = *(undefined4 *)(iVar1 + 4);
      uVar3 = *(undefined4 *)(iVar1 + 8);
      *param_2 = *(undefined4 *)(param_1 + 0x2c2c + param_3 * 0xc);
      param_2[1] = uVar2;
      param_2[2] = uVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c51135c,0x363,DAT_2c511360,DAT_2c511358,DAT_2c511354);
}

