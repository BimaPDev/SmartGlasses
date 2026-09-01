/* FUN_1009c11c @ 0x1009c11c */

int FUN_1009c11c(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,
                undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  int local_1d0;
  undefined4 local_1cc;
  undefined1 auStack_1c8 [48];
  undefined1 auStack_198 [188];
  undefined1 auStack_dc [188];
  
  local_1d0 = param_2 + -1;
  local_1cc = param_3[3];
  local_1d8 = 0;
  uStack_1d4 = 0;
  FUN_1011ea48(auStack_198,0,0xbc);
  iVar1 = FUN_1012cdb0(auStack_198,param_1,4,&local_1d8,param_2);
  if (iVar1 == 1) {
    local_1d0 = param_5 + -1;
    local_1cc = param_6[3];
    FUN_1011ea48(auStack_dc,0,0xbc);
    iVar1 = FUN_1012cdb0(auStack_dc,param_4,4,&local_1d8,param_5);
    if (iVar1 == 1) {
      FUN_1013b700(auStack_1c8);
      uVar4 = VectorSignedToFloat(param_6[1],(byte)(in_fpscr >> 0x16) & 3);
      uVar3 = VectorSignedToFloat(*param_6,(byte)(in_fpscr >> 0x16) & 3);
      FUN_1013b722(uVar3,uVar4,auStack_1c8);
      FUN_1010e930(*param_3,param_3[1],param_3[2] + 1,param_3[3] + 1);
      iVar1 = FUN_1010d404(auStack_198,auStack_dc,auStack_1c8,0,0,0);
      if (iVar1 == 0) {
        iVar2 = FUN_1009dc5c(param_3);
        iVar1 = 0;
        if (iVar2 == 1) {
          FUN_1010e930(0,0,0x7fffffff);
          FUN_1013b40a(auStack_198);
          FUN_1013b40a(auStack_dc);
          iVar1 = 1;
        }
      }
      else {
        FUN_10094174(3,DAT_1009c21c,0x8e,DAT_1009c218,DAT_1009c214,iVar1);
        iVar1 = 0;
      }
    }
    else {
      FUN_1013b40a(auStack_198);
    }
  }
  return iVar1;
}

