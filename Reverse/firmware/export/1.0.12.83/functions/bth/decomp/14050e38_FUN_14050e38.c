/* FUN_14050e38 @ 0x14050e38 */

int FUN_14050e38(undefined4 *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_14050f7c;
  local_28 = 1;
  local_2c = *(undefined2 *)(param_1 + 1);
  local_30 = *param_1;
  local_2a = *(undefined1 *)((int)param_1 + 10);
  local_1c = 0;
  local_20 = (undefined1)param_3;
  local_18 = 0;
  local_24 = param_2;
  local_1f = param_4;
  if (param_3 == 1) {
    local_18 = param_1[0x41];
    local_1c = DAT_14050f90;
    iVar1 = FUN_1409df38(&local_30);
    if (iVar1 == 1) {
      FUN_1402a6e8(4,0x51f,DAT_14050f88,DAT_14050f84,DAT_14050f98);
      *(undefined1 *)(param_1 + 0x3f) = 1;
      goto LAB_14050e9e;
    }
    if (iVar1 != 2) goto LAB_14050eec;
    *(undefined1 *)(param_1 + 0x3f) = 2;
  }
  else if (param_3 == 3) {
    local_18 = param_1[0x42];
    local_1c = DAT_14050f8c;
    iVar1 = FUN_1409df38(&local_30);
    if (iVar1 == 1) {
      FUN_1402a6e8(4,0x51f,DAT_14050f88,DAT_14050f84,DAT_14050f98);
      *(undefined1 *)((int)param_1 + 0xfd) = 1;
      goto LAB_14050e9e;
    }
    if (iVar1 != 2) goto LAB_14050eec;
    *(undefined1 *)((int)param_1 + 0xfd) = 2;
  }
  else {
    if (param_3 != 4) {
      iVar1 = FUN_1409df38(&local_30);
      if (iVar1 == 1) {
        uVar3 = 0x51f;
        uVar2 = DAT_14050f98;
      }
      else {
        if (iVar1 == 2) goto LAB_14050e8a;
LAB_14050eec:
        uVar3 = 0x52a;
        uVar2 = DAT_14050f94;
      }
      FUN_1402a6e8(4,uVar3,DAT_14050f88,DAT_14050f84,uVar2);
      goto LAB_14050e9e;
    }
    local_18 = param_1[0x43];
    local_1c = DAT_14050f8c;
    iVar1 = FUN_1409df38(&local_30);
    if (iVar1 == 1) {
      FUN_1402a6e8(4,0x51f,DAT_14050f88,DAT_14050f84,DAT_14050f98);
      *(undefined1 *)((int)param_1 + 0xfe) = 1;
      goto LAB_14050e9e;
    }
    if (iVar1 != 2) goto LAB_14050eec;
    *(undefined1 *)((int)param_1 + 0xfe) = 2;
  }
LAB_14050e8a:
  FUN_1402a6e8(4,0x525,DAT_14050f88,DAT_14050f84,DAT_14050f80);
  iVar1 = 2;
LAB_14050e9e:
  if (*DAT_14050f7c == local_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

