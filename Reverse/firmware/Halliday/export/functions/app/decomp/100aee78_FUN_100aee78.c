/* FUN_100aee78 @ 0x100aee78 */

int * FUN_100aee78(undefined4 param_1,undefined1 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_50;
  int local_4c [3];
  int local_40;
  
  piVar1 = (int *)FUN_100a92d4(8,0);
  if (piVar1 != (int *)0x0) {
    FUN_1011ea48(&local_50,0,0x38);
    local_50 = FUN_100af4e0(param_1);
    iVar2 = FUN_1006482c(0,4,local_4c);
    if (iVar2 == 0) {
      if ((local_4c[0] < 1) && (local_40 < 1)) {
        iVar2 = FUN_1006482c(piVar1,0,&local_50);
        if ((iVar2 == 0) && (*piVar1 != 0)) {
          *(undefined1 *)(piVar1 + 1) = param_2;
          *(byte *)((int)piVar1 + 5) = *(byte *)((int)piVar1 + 5) & 0xfe | param_3 != 0;
          return piVar1;
        }
        FUN_100a5b78((DAT_100aef40 - DAT_100aef44) * 0x20 & 0xff00U | 0x310011,DAT_100aef50,iVar2);
      }
      else {
        FUN_100a5b78((DAT_100aef40 - DAT_100aef44) * 0x20 & 0xff00U | 0x280012,DAT_100aef4c);
      }
    }
    else {
      FUN_100a5b78((DAT_100aef40 - DAT_100aef44) * 0x20 & 0xff00U | 0x220011,DAT_100aef48);
    }
    FUN_100a92e4(piVar1);
  }
  return (int *)0x0;
}

