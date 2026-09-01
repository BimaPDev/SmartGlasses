/* FUN_1009d900 @ 0x1009d900 */

undefined4 FUN_1009d900(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined1 auStack_2d8 [4];
  undefined1 auStack_2d4 [4];
  uint local_2d0;
  uint local_2cc;
  undefined1 auStack_2c0 [48];
  undefined1 auStack_290 [72];
  undefined1 auStack_248 [176];
  undefined1 auStack_198 [372];
  
  iVar5 = param_1[2];
  iVar6 = *param_1;
  iVar3 = *param_3;
  local_2e0 = 0;
  iVar7 = param_1[3];
  iVar8 = param_1[1];
  uVar1 = FUN_1009dbd4();
  if ((-1 < *param_3) && ((*(byte *)((int)param_3 + 0x11) & 7) == 0)) {
    uVar2 = FUN_1009d748(auStack_248,&local_2dc,iVar3,param_1);
    fVar11 = (float)VectorSignedToFloat(param_2[3],(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)VectorSignedToFloat(param_2[2],(byte)(in_fpscr >> 0x16) & 3);
    uVar10 = VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x16) & 3);
    if (*param_3 < 1) {
      uVar4 = 3;
    }
    else {
      uVar4 = 0;
    }
    iVar3 = FUN_1010ef00(uVar9,uVar10,fVar12 + 1.0,fVar11 + 1.0,auStack_290,2,uVar4,local_2dc,uVar2)
    ;
    if (iVar3 == 0) {
      FUN_1013b700(auStack_2c0);
      if ((*(byte *)((int)param_3 + 0x11) & 7) == 0) {
        uVar2 = FUN_1012cd74(*(undefined2 *)((int)param_3 + 6));
        iVar3 = FUN_1012cf1a(&local_2e0,uVar2,*(undefined1 *)((int)param_3 + 5),0x400);
        if (iVar3 != 1) {
          return 0;
        }
      }
      else {
        uVar2 = FUN_1012cd74((short)param_3[2]);
        local_2d0 = (uint)*(byte *)((int)param_3 + 10);
        iVar3 = FUN_1012cf1a(auStack_2d8,uVar2,*(undefined1 *)((int)param_3 + 5),0x401);
        if (iVar3 != 1) {
          return 0;
        }
        uVar2 = FUN_1012cd74((short)param_3[3]);
        local_2cc = (uint)*(byte *)((int)param_3 + 0xe);
        iVar3 = FUN_1012cf1a(auStack_2d4,uVar2,*(undefined1 *)((int)param_3 + 5),0x401);
        if (iVar3 != 1) {
          return 0;
        }
        FUN_1011ea48(auStack_198,0,0x170);
        iVar3 = FUN_1013b440(auStack_198);
        if (iVar3 != 0) {
          uVar2 = 0x95;
          uVar1 = DAT_1009dbb4;
          goto LAB_1009da12;
        }
        iVar3 = FUN_1013b460(auStack_198,2,auStack_2d8,&local_2d0);
        if (iVar3 != 0) {
          uVar2 = 0x98;
          uVar1 = DAT_1009dbb8;
          goto LAB_1009da12;
        }
        iVar3 = FUN_1013b4b4(auStack_198);
        if (iVar3 != 0) {
          uVar2 = 0x9b;
          uVar1 = DAT_1009dbbc;
          goto LAB_1009da12;
        }
        uVar2 = FUN_1013b604(auStack_198);
        FUN_1013b700();
        uVar10 = VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
        uVar9 = VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
        FUN_1013b722(uVar9,uVar10,uVar2);
        if ((*(byte *)((int)param_3 + 0x11) & 7) == 1) {
          fVar11 = (float)VectorSignedToFloat((iVar7 + 1) - iVar8,(byte)(in_fpscr >> 0x16) & 3);
          FUN_1013b756(0x3f800000,fVar11 * DAT_1009dbc0,uVar2);
          FUN_1010ee7c(DAT_1009dbc4,uVar2);
        }
        else {
          fVar11 = (float)VectorSignedToFloat((iVar5 + 1) - iVar6,(byte)(in_fpscr >> 0x16) & 3);
          FUN_1013b756(fVar11 * DAT_1009dbc0,0x3f800000,uVar2);
        }
      }
      if ((*(byte *)((int)param_3 + 5) < 0xfd) || (uVar2 = 0, (char)param_3[1] != '\0')) {
        uVar2 = FUN_1012cf78();
      }
      FUN_1010e930(*param_2,param_2[1],param_2[2] + 1,param_2[3] + 1);
      if ((*(byte *)((int)param_3 + 0x11) & 7) == 0) {
        iVar3 = FUN_1010efdc(uVar1,auStack_290,0x1900,auStack_2c0,uVar2,local_2e0);
      }
      else {
        FUN_1010ea00();
        iVar3 = FUN_1013b874(uVar1,auStack_290,0x1900,auStack_2c0,auStack_198,uVar2);
        if (iVar3 != 0) {
          FUN_1013b5f0(auStack_198);
        }
        FUN_1010ea30();
      }
      if (iVar3 != 0) {
        uVar2 = 199;
        uVar1 = DAT_1009dbc8;
LAB_1009da12:
        FUN_10094174(3,DAT_1009dbb0,uVar2,DAT_1009dbac,uVar1,iVar3);
        return 0;
      }
      iVar3 = FUN_1009dc5c(param_2);
      if (iVar3 != 1) {
        return 0;
      }
      FUN_1010e930(0,0,0x7fffffff);
      iVar3 = FUN_1013b79e(auStack_290);
      if (iVar3 == 0) {
        if (((*(byte *)((int)param_3 + 0x11) & 7) == 0) ||
           (iVar3 = FUN_1013b5f0(auStack_198), iVar3 == 0)) {
          return 1;
        }
        uVar2 = 0xd3;
        uVar1 = DAT_1009dbd0;
        goto LAB_1009da12;
      }
      uVar2 = 0xcf;
      uVar1 = DAT_1009dbcc;
    }
    else {
      uVar2 = 0x79;
      uVar1 = DAT_1009dba8;
    }
    FUN_10094174(3,DAT_1009dbb0,uVar2,DAT_1009dbac,uVar1,iVar3);
  }
  return 0;
}

