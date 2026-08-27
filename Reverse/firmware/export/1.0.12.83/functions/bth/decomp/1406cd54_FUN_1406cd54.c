/* FUN_1406cd54 @ 0x1406cd54 */

undefined4 FUN_1406cd54(undefined4 param_1,undefined1 param_2,uint param_3,int param_4,int *param_5)

{
  undefined2 uVar1;
  int iVar2;
  
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406cdcc,0x101,DAT_1406cdc8,0);
  }
  if (0x17 < param_3) {
    iVar2 = FUN_14073fdc(param_3,2);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = param_4;
      *(undefined1 *)(iVar2 + 0x11) = param_2;
      *(undefined2 *)(iVar2 + 0x12) = 0xff20;
      uVar1 = FUN_14064228();
      *(undefined2 *)(iVar2 + 0x14) = uVar1;
      FUN_14058974(iVar2 + 8,param_1,2);
      *param_5 = iVar2;
      return 0;
    }
    return 0x11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1406cdcc,0x102,DAT_1406cdc8,param_4);
}

