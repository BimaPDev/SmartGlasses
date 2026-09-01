/* FUN_100cccc0 @ 0x100cccc0 */

undefined4 FUN_100cccc0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = DAT_100ccd60;
  if ((*(int *)(param_1 + 8) == DAT_100ccd5c) &&
     (iVar4 = *(int *)(param_1 + 0xc), *(short *)(iVar4 + 0x32) != 0)) {
    bVar5 = false;
    iVar3 = iVar4 + 1;
    do {
      if (*(short *)(iVar3 + 7) != 0) {
        iVar2 = FUN_10133724(param_3,*(undefined1 *)(iVar3 + -1),iVar3,*(short *)(iVar3 + 7),param_4
                            );
        if (iVar2 == 0) {
          iVar2 = FUN_100ca324(*(undefined1 *)(iVar3 + -1),iVar3);
          if (iVar2 != 0) {
            if (*(char *)(iVar2 + 0xd) == '\a') {
              bVar5 = true;
            }
            FUN_100ca13c();
          }
        }
        else {
          iVar2 = FUN_101331f8(*(undefined1 *)(param_3 + 8),param_3 + 0x90);
          if (iVar2 == 0) {
            if (iVar4 == iVar1) {
              FUN_100ccbd0(param_3);
            }
            FUN_10134786(iVar3 + -1);
          }
          else {
            FUN_10134778(iVar3,param_3 + 0x90);
          }
        }
      }
      iVar3 = iVar3 + 10;
    } while (iVar4 + 0x33 != iVar3);
    if (!bVar5) {
      *(undefined2 *)(iVar4 + 0x32) = 0;
      if (*(code **)(iVar4 + 0x34) != (code *)0x0) {
        (**(code **)(iVar4 + 0x34))(param_1,0);
      }
    }
  }
  return 1;
}

