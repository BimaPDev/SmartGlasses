/* FUN_100a07a0 @ 0x100a07a0 */

int FUN_100a07a0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte *pbVar8;
  undefined4 *puVar7;
  
  iVar1 = FUN_100a0310(param_1,2);
  if (iVar1 != 0) {
    if (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1e)) {
      return -1;
    }
    if (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1c)) {
LAB_100a07c2:
      pbVar5 = (byte *)(param_1 + 0x24);
      puVar4 = (undefined4 *)(param_1 + 0x28);
      puVar6 = puVar4;
      pbVar8 = pbVar5;
      do {
        puVar7 = puVar6 + 1;
        if (((code *)*puVar6 != (code *)0x0) && ((int)((uint)*pbVar8 << 0x1b) < 0)) {
          (*(code *)*puVar6)(puVar6[-3],*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(param_1 + 0x14),param_2,param_3,0x10);
        }
        pbVar8 = pbVar8 + 1;
        puVar6 = puVar7;
      } while (puVar7 != (undefined4 *)(param_1 + 0x30));
      iVar1 = (**(code **)(*(int *)(param_1 + 0x50) + 0x1c))(param_1,param_2,param_3);
      if (param_3 != iVar1) {
        return iVar1;
      }
      if (iVar1 == 0) {
        *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_10113fd0();
      }
      iVar2 = thunk_FUN_1013c70e();
      if (iVar2 == 0) {
        FUN_1011dbf4(param_1 + 0x3c,0xffffffff);
      }
      iVar2 = iVar1;
      if (((*(char *)(param_1 + 0x30) == '\x02') && (iVar3 = *(int *)(param_1 + 0x34), iVar3 != 0))
         && (iVar2 = (**(code **)(*(int *)(iVar3 + 0x50) + 0x1c))(iVar3,param_2,iVar1),
            iVar1 != iVar2)) {
        iVar1 = thunk_FUN_1013c70e();
        if (iVar1 != 0) {
          return iVar2;
        }
        thunk_FUN_10113e2c(param_1 + 0x3c);
        return iVar2;
      }
      iVar3 = thunk_FUN_1013c70e();
      if (iVar3 == 0) {
        thunk_FUN_10113e2c(param_1 + 0x3c);
      }
      do {
        puVar6 = puVar4 + 1;
        if (((code *)*puVar4 != (code *)0x0) && ((int)((uint)*pbVar5 << 0x1e) < 0)) {
          (*(code *)*puVar4)(puVar4[-3],*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(param_1 + 0x14),param_2,iVar1,2);
        }
        pbVar5 = pbVar5 + 1;
        puVar4 = puVar6;
      } while (puVar6 != (undefined4 *)(param_1 + 0x30));
      return iVar2;
    }
    iVar1 = 0;
    do {
      iVar2 = FUN_1012d654(param_1);
      if (param_3 <= iVar2) goto LAB_100a07c2;
      iVar2 = iVar1;
      if (((int)((uint)*(byte *)(param_1 + 1) << 0x1b) < 0) && (iVar2 = iVar1 + 1, 0x14 < iVar1)) {
        FUN_100a5b78((DAT_100a0920 - DAT_100a091c) * 0x20 & 0xff00U | 0x1180031,DAT_100a0928,
                     DAT_100a0924);
        *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
        return 0;
      }
      FUN_1011dbde(*(undefined4 *)(param_1 + 0x18),0x32);
      iVar3 = FUN_100a0310(param_1,2);
      iVar1 = iVar2;
    } while (iVar3 != 0);
  }
  return -0x58;
}

