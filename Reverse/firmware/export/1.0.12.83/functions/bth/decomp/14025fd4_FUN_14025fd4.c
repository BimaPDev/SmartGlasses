/* FUN_14025fd4 @ 0x14025fd4 */

undefined4 FUN_14025fd4(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if (*param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else if (param_1[1] == 0) {
    uVar1 = 0xfffffffe;
  }
  else if (param_1[2] == 0) {
    uVar1 = 0xfffffffd;
  }
  else if (param_1[3] == 0) {
    uVar1 = 0xfffffffc;
  }
  else if (param_1[4] == 0) {
    uVar1 = 0xfffffffb;
  }
  else if (param_1[5] == 0) {
    uVar1 = 0xfffffffa;
  }
  else if (param_1[6] == 0) {
    uVar1 = 0xfffffff9;
  }
  else if (param_1[7] == 0) {
    uVar1 = 0xfffffff8;
  }
  else if (param_1[8] == 0) {
    uVar1 = 0xfffffff7;
  }
  else if (param_1[9] == 0) {
    uVar1 = 0xfffffff6;
  }
  else if (param_1[10] == 0) {
    uVar1 = 0xfffffff5;
  }
  else if (param_1[0xb] == 0) {
    uVar1 = 0xfffffff4;
  }
  else if (*(byte *)((int)param_1 + 0x35) == 0) {
    uVar1 = 0xfffffff3;
  }
  else if (*(short *)((int)param_1 + 0x36) == 0) {
    uVar1 = 0xfffffff2;
  }
  else if (param_1[0xe] == 0) {
    uVar1 = 0xfffffff1;
  }
  else if (param_1[0xf] == 0) {
    uVar1 = 0xfffffff0;
  }
  else if (param_1[0x10] == 0) {
    uVar1 = 0xffffffef;
  }
  else {
    iVar3 = param_1[0x11];
    if (iVar3 == 0) {
      uVar1 = 0xffffffee;
    }
    else if (param_1[0x12] == 0) {
      uVar1 = 0xffffffed;
    }
    else {
      if (*(byte *)((int)param_1 + 0x35) <= param_2) {
        return 1;
      }
      iVar5 = param_2 * 0x2c;
      iVar2 = param_1[0xe] + iVar5;
      bVar6 = param_5 != 0;
      if (*(char *)(iVar2 + 0x2a) == '\0') {
        uVar4 = (uint)*(char *)(param_1[0x10] + param_2);
        if (-1 < (int)uVar4) {
          *(int *)(DAT_140262d0 + ((uVar4 >> 5) + 0x20) * 4) = 1 << (uVar4 & 0x1f);
          DataSynchronizationBarrier(0xf);
          InstructionSynchronizationBarrier(0xf);
          iVar3 = param_1[0x11];
        }
        uVar4 = (uint)*(char *)(iVar3 + param_2);
        if (-1 < (int)uVar4) {
          *(int *)(DAT_140262d0 + ((uVar4 >> 5) + 0x20) * 4) = 1 << (uVar4 & 0x1f);
          DataSynchronizationBarrier(0xf);
          InstructionSynchronizationBarrier(0xf);
        }
        iVar3 = DAT_140262d4;
        *(int *)(*(int *)(DAT_140262d4 + 8) + (*(char *)(param_1[0x10] + param_2) + 0x10) * 4) =
             param_1[10];
        DataSynchronizationBarrier(0xf);
        uVar4 = (uint)*(char *)(param_1[0x10] + param_2);
        if ((int)uVar4 < 0) {
          *(undefined1 *)((uVar4 & 0xf) + iVar3 + 0x14) = 0xa0;
        }
        else {
          *(undefined1 *)(uVar4 + 0xe000e400) = 0xa0;
        }
        iVar3 = DAT_140262d4;
        *(int *)(*(int *)(DAT_140262d4 + 8) + (*(char *)(param_1[0x11] + param_2) + 0x10) * 4) =
             param_1[0xb];
        DataSynchronizationBarrier(0xf);
        uVar4 = (uint)*(char *)(param_1[0x11] + param_2);
        if ((int)uVar4 < 0) {
          *(undefined1 *)((uVar4 & 0xf) + iVar3 + 0x14) = 0xa0;
        }
        else {
          *(undefined1 *)(uVar4 + 0xe000e400) = 0xa0;
        }
        (*(code *)param_1[3])(param_2);
        FUN_140e5658(param_1[0xe] + iVar5,0,0x2c);
        *(bool *)(param_1[0xe] + iVar5 + 0x28) = bVar6;
        *(uint *)(param_1[0xe] + iVar5 + 8) =
             param_1[0xf] + param_2 * *(ushort *)((int)param_1 + 0x36) * 0x10;
        *(uint *)(param_1[0xe] + iVar5 + 0xc) = (uint)*(ushort *)((int)param_1 + 0x36);
        FUN_140e5658(*(undefined4 *)(param_1[0xe] + iVar5 + 8),0,
                     *(int *)(param_1[0xe] + iVar5 + 0xc) << 4);
        FUN_1402a6e8(4,0x15f,DAT_140262dc,DAT_140262e0,DAT_140262d8,*param_1,param_2,param_1[1],
                     (undefined4 *)param_1[2],*(undefined4 *)param_1[2]);
        FUN_1402a6e8(4,0x161,DAT_140262dc,DAT_140262e0,DAT_140262e4,*param_1,param_2,
                     param_1[0xe] + iVar5,*(undefined1 *)(param_1[0xe] + iVar5 + 0x28));
        *(undefined4 *)(param_1[0xe] + iVar5 + 0x20) = param_3;
        *(undefined4 *)(param_1[0xe] + iVar5 + 0x24) = param_4;
        *(undefined1 *)(param_1[0xe] + iVar5 + 0x2a) = 1;
        iVar3 = DAT_140262d0;
        uVar4 = (uint)*(char *)(param_1[0x11] + param_2);
        if (-1 < (int)uVar4) {
          *(int *)(DAT_140262d0 + ((uVar4 >> 5) + 0x60) * 4) = 1 << (uVar4 & 0x1f);
          uVar4 = (uint)*(char *)(param_1[0x11] + param_2);
          if (-1 < (int)uVar4) {
            *(int *)(iVar3 + (uVar4 >> 5) * 4) = 1 << (uVar4 & 0x1f);
          }
        }
        *(int **)param_1[2] = param_1;
        DataSynchronizationBarrier(0xf);
        return 0;
      }
      if (bVar6 != (bool)*(char *)(iVar2 + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140262e8,bVar6);
      }
      uVar1 = 3;
    }
  }
  return uVar1;
}

