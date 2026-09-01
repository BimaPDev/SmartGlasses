/* FUN_100cd0ec @ 0x100cd0ec */

undefined4 FUN_100cd0ec(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int local_30;
  uint uStack_2c;
  int iStack_28;
  
  if (*(int *)(param_1 + 8) == DAT_100cd1d4) {
    iVar5 = *(int *)(param_1 + 0xc);
    local_30 = param_1;
    uStack_2c = param_2;
    iStack_28 = param_3;
    if (iVar5 == DAT_100cd1d8) {
      iVar1 = 0;
      iVar4 = DAT_100cd1dc;
      do {
        local_30 = 0;
        uStack_2c = uStack_2c & 0xff000000;
        iVar2 = FUN_10134500(iVar4,&local_30);
        if (iVar2 != 0) {
          iVar2 = FUN_100ca3d4(*(undefined1 *)(iVar4 + -1),iVar4,7);
          if (iVar2 == 0) {
            puVar3 = *(undefined2 **)(*(int *)(param_3 + 0x10) + 0x10);
            FUN_100cca3c(*(undefined1 *)(iVar4 + -1),iVar4,*puVar3,puVar3[1]);
          }
          else {
            FUN_100ca13c();
          }
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar1 != 9);
    }
    iVar4 = iVar5 + 1;
    do {
      if ((*(short *)(iVar4 + 7) == *(short *)(param_3 + 0xc)) &&
         (iVar1 = FUN_100ca324(*(undefined1 *)(iVar4 + -1),iVar4), iVar1 != 0)) {
        if ((*(char *)(iVar1 + 0xd) == '\a') &&
           ((*(code **)(iVar5 + 0x3c) == (code *)0x0 ||
            (iVar2 = (**(code **)(iVar5 + 0x3c))(iVar1,param_1), iVar2 != 0)))) {
          if (*(short *)(param_3 + 0xc) == 2) {
            iVar2 = FUN_100ccef8();
            if (iVar2 == 0) {
              *(char *)(*(int *)(param_3 + 0x10) + 0x16) =
                   *(char *)(*(int *)(param_3 + 0x10) + 0x16) + '\x01';
            }
          }
          else {
            iVar2 = FUN_100ccfb0(iVar1,*(undefined2 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x10))
            ;
          }
          FUN_100ca13c(iVar1);
          if (iVar2 < 0) {
            return 0;
          }
          *(undefined4 *)(param_3 + 8) = 0;
        }
        else {
          FUN_100ca13c(iVar1);
        }
      }
      iVar4 = iVar4 + 10;
    } while (iVar4 != iVar5 + 0x33);
  }
  return 1;
}

