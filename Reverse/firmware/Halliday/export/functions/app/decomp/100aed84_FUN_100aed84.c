/* FUN_100aed84 @ 0x100aed84 */

int * FUN_100aed84(undefined4 param_1,undefined1 param_2,undefined1 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c [3];
  int local_40;
  
  piVar1 = (int *)FUN_100a92d4(8,0);
  if (piVar1 != (int *)0x0) {
    FUN_1011ea48(&local_58,0,0x40);
    local_58 = FUN_100af4e0(param_1);
    local_54 = 100;
    uStack_50 = 200;
    FUN_101162c8(DAT_100aee60);
    iVar2 = FUN_1012ef56(0,6,local_4c);
    if (iVar2 == 0) {
      if ((local_4c[0] < 1) && (local_40 < 1)) {
        iVar2 = FUN_1012ef56(piVar1,0,&local_58);
        if ((iVar2 == 0) && (*piVar1 != 0)) {
          *(undefined1 *)(piVar1 + 1) = param_2;
          *(undefined1 *)((int)piVar1 + 5) = param_3;
          *(byte *)((int)piVar1 + 6) = *(byte *)((int)piVar1 + 6) & 0xfe | param_4 != 0;
          return piVar1;
        }
        FUN_100a5b78((DAT_100aee64 - DAT_100aee68) * 0x20 & 0xff00U | 0x390011,DAT_100aee74,iVar2);
      }
      else {
        FUN_100a5b78((DAT_100aee64 - DAT_100aee68) * 0x20 & 0xff00U | 0x300012,DAT_100aee70);
      }
    }
    else {
      FUN_100a5b78((DAT_100aee64 - DAT_100aee68) * 0x20 & 0xff00U | 0x2a0011,DAT_100aee6c);
    }
    FUN_100a92e4(piVar1);
  }
  return (int *)0x0;
}

