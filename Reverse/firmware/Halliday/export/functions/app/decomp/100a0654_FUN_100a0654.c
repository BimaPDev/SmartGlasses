/* FUN_100a0654 @ 0x100a0654 */

int FUN_100a0654(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar5;
  undefined4 *puVar4;
  
  iVar1 = FUN_100a0310(param_1,2);
  if (iVar1 == 0) {
LAB_100a0784:
    iVar1 = -0x58;
  }
  else if ((int)((uint)*(byte *)(param_1 + 1) << 0x1f) < 0) {
    if ((int)((uint)*(byte *)(param_1 + 1) << 0x1d) < 0) {
      iVar1 = 0;
      do {
        iVar2 = FUN_1012d608(param_1);
        if (param_3 <= iVar2) break;
        iVar2 = iVar1;
        if (((int)((uint)*(byte *)(param_1 + 1) << 0x1b) < 0) && (iVar2 = iVar1 + 1, 0x14 < iVar1))
        {
          FUN_100a5b78((DAT_100a0794 - DAT_100a0790) * 0x20 & 0xff00U | 0x7a0031,DAT_100a079c,
                       DAT_100a0798);
          *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
          goto LAB_100a0688;
        }
        FUN_1011dbde(*(undefined4 *)(param_1 + 0x18),0x32);
        iVar1 = FUN_100a0310(param_1,2);
        if (iVar1 == 0) goto LAB_100a0784;
        iVar1 = iVar2;
      } while (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1e));
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0x50) + 8))(param_1,param_2,param_3);
    if (iVar1 < 0) {
LAB_100a0688:
      iVar1 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_10113fd0();
      }
      iVar2 = thunk_FUN_1013c70e();
      if (iVar2 == 0) {
        FUN_1011dbf4(param_1 + 0x3c,0xffffffff);
      }
      if (((*(char *)(param_1 + 0x30) == '\x01') && (iVar2 = *(int *)(param_1 + 0x34), iVar2 != 0))
         && (iVar1 = (**(code **)(*(int *)(iVar2 + 0x50) + 0x1c))(iVar2,param_2,param_3),
            param_3 != iVar1)) {
        iVar2 = thunk_FUN_1013c70e();
        if (iVar2 == 0) {
          thunk_FUN_10113e2c(param_1 + 0x3c);
        }
      }
      else {
        iVar2 = thunk_FUN_1013c70e();
        if (iVar2 == 0) {
          thunk_FUN_10113e2c(param_1 + 0x3c);
        }
        pbVar5 = (byte *)(param_1 + 0x24);
        puVar3 = (undefined4 *)(param_1 + 0x28);
        do {
          puVar4 = puVar3 + 1;
          if (((code *)*puVar3 != (code *)0x0) && ((int)((uint)*pbVar5 << 0x1f) < 0)) {
            (*(code *)*puVar3)(puVar3[-3],*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                               *(undefined4 *)(param_1 + 0x14),param_2,iVar1,1);
          }
          pbVar5 = pbVar5 + 1;
          puVar3 = puVar4;
        } while ((undefined4 *)(param_1 + 0x30) != puVar4);
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

