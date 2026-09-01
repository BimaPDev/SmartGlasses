/* FUN_10115ecc @ 0x10115ecc */

undefined4 FUN_10115ecc(int param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  
  pbVar5 = *(byte **)(param_1 + 8);
  if (pbVar5 == (byte *)0x0) goto LAB_10115f16;
  uVar3 = (uint)pbVar5[1];
  if (uVar3 == 1) {
    pbVar6 = pbVar5 + -0x60;
    if (pbVar6 == (byte *)0x0) {
      FUN_10119dc2(DAT_10115fbc,DAT_10115fb8,DAT_10115fb4,0x107,param_1,param_2,param_3,1,param_1,
                   param_2);
      FUN_10119dc2(DAT_10115fc0);
      FUN_1011a1f0(DAT_10115fb4,0x107,param_3,uVar3);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x10115f08);
      (*pcVar1)();
    }
    bVar2 = pbVar5[-0x53] & 2;
    if ((pbVar5[-0x53] & 2) != 0) {
      if (*(int *)(pbVar5 + -0x34) == -1 && *(int *)(pbVar5 + -0x38) == -2) {
        *pbVar5 = 0;
        return 0xfffffff5;
      }
      FUN_1013cc34(pbVar6);
      if (param_2 == 8) {
        uVar4 = 0xfffffffc;
      }
      else {
        uVar4 = 0;
      }
      *(undefined4 *)(pbVar5 + 0x6c) = uVar4;
      if (((pbVar5[-0x53] & 0x1f) != 0) || (*(int *)(pbVar5 + -0x48) != 0)) goto LAB_10115f70;
      FUN_1013cc6c(pbVar6);
LAB_10115f7a:
      *pbVar5 = 0;
      goto LAB_10115f16;
    }
  }
  else {
    if (uVar3 == 2) {
      if (*pbVar5 == 0) goto LAB_10115f16;
      iVar7 = *(int *)(pbVar5 + -4);
      if (iVar7 == 0) {
        *pbVar5 = 0;
        goto LAB_10115f16;
      }
      pbVar6 = pbVar5 + -0x14;
      FUN_1013cdcc(pbVar5 + 0x14);
      pbVar5[0x2c] = 0;
      pbVar5[0x2d] = 0;
      pbVar5[0x2e] = 0;
      pbVar5[0x2f] = 0;
      FUN_10114490(iVar7,pbVar6);
      goto LAB_10115f7a;
    }
LAB_10115f70:
    bVar2 = 0;
  }
  *pbVar5 = bVar2;
LAB_10115f16:
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) =
       *(uint *)(param_1 + 0xc) & 0xffe03fff |
       (param_2 & 0x7f | (*(uint *)(param_1 + 0xc) & 0x1fffff) >> 0xe) << 0xe;
  return 0;
}

