/* FUN_1009ae54 @ 0x1009ae54 */

undefined4 FUN_1009ae54(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_1009aeb8;
  pcVar1 = DAT_1009aeb4;
  if (*DAT_1009aeb4 == '\0') {
    *DAT_1009aeb4 = '\x01';
    FUN_1011ea48(iVar2,0,100,pcVar1,param_1);
    FUN_1013ca1a(iVar2 + 0x40,0,1);
    *(undefined1 *)(iVar2 + 1) = 1;
    iVar3 = FUN_1009b5c0();
    if (iVar3 == 0) {
      *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) | 2;
    }
    iVar3 = FUN_1012c706();
    if (iVar3 == 0) {
      *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) | 4;
    }
  }
  *(undefined **)(param_1 + 0x2c) = PTR_LAB_1012c450_1_1009aebc;
  *(undefined **)(param_1 + 0x38) = PTR_FUN_1009b000_1_1009aec0;
  *(undefined4 *)(param_1 + 0x58) = 0x58;
  *(undefined **)(param_1 + 0x50) = PTR_FUN_1009a9cc_1_1009aec4;
  *(undefined **)(param_1 + 0x54) = PTR_LAB_1012c458_1_1009aec8;
  return 1;
}

