/* FUN_100652e4 @ 0x100652e4 */

void FUN_100652e4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10065344;
  if (*DAT_10065340 == '\0') {
    *DAT_10065340 = '\x01';
    iVar2 = FUN_10112e84(DAT_10065348);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2,DAT_1006534c);
    }
    iVar2 = FUN_10112e84(DAT_10065350);
    piVar1[1] = iVar2;
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2,DAT_10065354);
    }
  }
  if (((((param_1 & 0xfc) != 0) || (piVar1[1] == 0)) ||
      (((int)(param_1 << 0x1f) < 0 && (-1 < (int)((uint)*(byte *)(DAT_1006534c + 0x1a) << 0x1c)))))
     && (*piVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_10065360,0xb2,DAT_1006535c,DAT_10065358,param_4);
  }
  return;
}

