/* FUN_100a27e8 @ 0x100a27e8 */

void FUN_100a27e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_24 [2];
  undefined1 local_22;
  undefined4 local_1c;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      if (param_3 != 0) {
        FUN_100a9600(*(int *)(param_1 + 0x28),0x1c,10,0);
        FUN_1011dbc8(10);
      }
      FUN_1001946c();
      FUN_100a9394(*(undefined4 *)(param_1 + 0x28));
      FUN_100a98c4(*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_100a0a70();
      FUN_100a0b00(*(undefined4 *)(param_1 + 0x2c));
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    *(undefined4 *)(*DAT_100a2888 + 0xc) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      thunk_FUN_10113e2c(param_1 + 0x10);
      (**(code **)(param_1 + 0x30))(param_2 + 0x16,2);
      FUN_1011dbf4(param_1 + 0x10,0xffffffff);
    }
    iVar1 = FUN_1009e224();
    if (iVar1 != 0) {
      FUN_1011ea48(auStack_24,0,0x14);
      local_22 = 10;
      local_1c = 2;
      FUN_1009ece8(iVar1,auStack_24);
    }
    FUN_1012d1f4(param_2);
  }
  return;
}

