/* FUN_2c640dcc @ 0x2c640dcc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c640dcc(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = FUN_2c602408();
  if (iVar4 == 0xd) {
    uVar5 = FUN_2c602618(param_1);
    piVar3 = _LAB_2c640e84;
    piVar2 = _LAB_2c640e7c;
    piVar1 = _LAB_2c640e78;
    if (uVar5 == 0xd2) {
      FUN_2c6411e0();
      if (*_LAB_2c640e78 == *_LAB_2c640e7c) {
        FUN_2c63faf0();
      }
      else {
        FUN_2c63da94();
      }
LAB_2c640e3e:
      *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 8;
      return;
    }
    if (uVar5 < 0xd3) {
      if (uVar5 - 0xce < 2) {
        if (*_LAB_2c640e78 == *_LAB_2c640e7c) {
          FUN_2c6072bc(*_LAB_2c640e80,8,0);
          *piVar1 = *_LAB_2c640e88;
        }
        else {
          FUN_2c6072bc(*_LAB_2c640e80,7,0);
          *piVar1 = *piVar2;
        }
        func_0x2c641224();
        *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 8;
        return;
      }
    }
    else if (uVar5 == 0xd3) {
      if ((*_LAB_2c640e84 != 0) && (iVar4 = FUN_2c607e50(), iVar4 != 0)) {
        FUN_2c602bc4(*piVar3);
        lv_obj_add_flag_invalidate(*piVar3,1);
      }
      func_0x2c641270(0);
      goto LAB_2c640e3e;
    }
  }
  return;
}

