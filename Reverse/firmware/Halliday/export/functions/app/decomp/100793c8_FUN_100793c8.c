/* FUN_100793c8 @ 0x100793c8 */

undefined4 FUN_100793c8(int param_1,ushort *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  ushort *puVar10;
  
  pcVar7 = *(char **)(param_1 + 0x10);
  puVar6 = (uint *)**(undefined4 **)(param_1 + 4);
  if (*pcVar7 == '\0') {
    uVar5 = 0xfffffff2;
  }
  else {
    if ((int)((*puVar6 >> 0x10) << 0x17) < 0) {
      if (-1 < (int)((*puVar6 >> 0x10) << 0x1f)) {
        puVar10 = param_2;
        uVar9 = FUN_1013c70e();
        if ((int)uVar9 == 0) {
          FUN_10113cfc(pcVar7 + 0x1c,(int)((ulonglong)uVar9 >> 0x20),0xffffffff,0xffffffff);
        }
        else {
          FUN_10119dc2(DAT_100794f0,DAT_100794e4,*(undefined4 *)(param_2 + 2),*param_2,param_1,
                       puVar10,param_3);
        }
        *puVar6 = *param_2 | 0x10000;
        puVar6[1] = *(uint *)(param_2 + 2);
        puVar6[2] = *(uint *)(param_2 + 4);
        puVar6[3] = *(uint *)(param_2 + 6);
        puVar1 = DAT_100794f4;
        *DAT_100794f4 = 0;
        for (iVar3 = 0; iVar3 < 0x14; iVar3 = iVar3 + 1) {
        }
        iVar8 = 0x3e9;
        *puVar1 = 1;
        while ((-1 < (int)(*puVar6 << 7) && (iVar8 = iVar8 + -1, iVar8 != 0))) {
          FUN_1011598c(1);
        }
        uVar2 = *puVar6 >> 0x10;
        if ((int)(*puVar6 << 7) < 0) {
          if ((uVar2 & 0x800) == 0) {
            if ((uVar2 & 0x400) == 0) {
              if ((uVar2 & 0x200) == 0) {
                param_2[1] = 1;
              }
              else {
                param_2[1] = 2;
              }
              uVar5 = 0;
            }
            else {
              *(uint *)(param_2 + 4) = puVar6[2];
              *(uint *)(param_2 + 6) = puVar6[3];
              param_2[1] = 3;
              uVar5 = 0;
            }
          }
          else {
            param_2[1] = 0xffff;
            uVar5 = 0xffffff7a;
          }
        }
        else {
          FUN_10119dc2(DAT_100794f8,DAT_100794e4,*param_2,uVar2,param_1,iVar3,param_3);
          param_2[1] = 0xfffe;
          uVar5 = 0xffffff8c;
        }
        iVar3 = FUN_1013c70e();
        if (iVar3 != 0) {
          return uVar5;
        }
        FUN_10113e2c(pcVar7 + 0x1c);
        return uVar5;
      }
      uVar2 = puVar6[1];
      uVar4 = *puVar6;
      uVar5 = DAT_100794ec;
    }
    else {
      uVar2 = puVar6[1];
      uVar4 = *puVar6;
      uVar5 = DAT_100794e8;
    }
    FUN_10119dc2(uVar5,DAT_100794e4,uVar2,uVar4 & 0xffff,param_1,param_2,param_3);
    uVar5 = 0xfffffff0;
  }
  return uVar5;
}

