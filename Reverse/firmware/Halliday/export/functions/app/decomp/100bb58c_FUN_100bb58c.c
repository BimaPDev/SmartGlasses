/* FUN_100bb58c @ 0x100bb58c */

void FUN_100bb58c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined1 uStack_3c;
  undefined4 local_3b;
  undefined2 local_37;
  undefined1 local_35;
  undefined1 local_34;
  int local_30;
  
  FUN_1011dbf4(DAT_100bb610,0xffffffff);
  iVar1 = DAT_100bb614;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    iVar3 = 0;
    iVar5 = DAT_100bb614;
    do {
      iVar3 = iVar3 + 1;
      if (((*(byte *)(iVar1 + iVar3 * 8 + 7) & 1) != 0) &&
         (iVar2 = FUN_1011ea30(iVar5 + 8,param_1,6), iVar2 == 0)) {
        FUN_1011ea48(&uStack_3c,0,0x1c);
        local_3b = *param_1;
        local_37 = *(undefined2 *)(param_1 + 1);
        local_34 = FUN_1011ea10(param_2);
        local_35 = *(undefined1 *)(iVar5 + 0xe);
        pcVar4 = *(code **)(iVar1 + 4);
        local_30 = param_2;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(&uStack_3c);
        }
      }
      iVar5 = iVar5 + 8;
    } while (iVar3 != 4);
  }
  FUN_100bb4c0();
  FUN_100bb580();
  return;
}

