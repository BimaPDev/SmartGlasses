/* FUN_100eefd0 @ 0x100eefd0 */

void FUN_100eefd0(void)

{
  short sVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  piVar3 = DAT_100ef0d0;
  cVar2 = *(char *)((int)DAT_100ef0d0 + 9);
  iVar4 = FUN_100eee48(*(undefined1 *)((int)DAT_100ef0d0 + 9),2);
  if (iVar4 == 0) {
    return;
  }
  while ((int)(uint)*(byte *)(*piVar3 + 2) <= (int)*(char *)((int)piVar3 + 0xb)) {
    iVar4 = FUN_100eee48(*(char *)((int)piVar3 + 0xb),0);
    if (iVar4 == 0) {
      sVar1 = *(short *)(*piVar3 + 0x10);
      if ((sVar1 != 0) && (*(short *)(*(int *)(*piVar3 + 4) + cVar2 * 2) != sVar1)) {
        return;
      }
      cVar2 = *(char *)((int)piVar3 + 0xb);
      uVar6 = FUN_100eee10((int)cVar2);
      FUN_100eef38(cVar2,uVar6,0,1);
      return;
    }
    *(char *)((int)piVar3 + 0xb) = *(char *)((int)piVar3 + 0xb) + -1;
  }
  uVar7 = (uint)(char)(cVar2 + -1);
  uVar5 = uVar7;
  if ((int)((uint)*(byte *)(piVar3 + 2) << 0x1f) < 0) {
    uVar5 = FUN_100eec68(uVar7);
  }
  iVar4 = FUN_100eec8c(uVar5);
  if ((iVar4 == 0) || (iVar4 = FUN_100eee48(uVar5 & 0xff,0), iVar4 != 0)) {
    uVar7 = (uint)(char)(cVar2 + '\x01');
    uVar5 = uVar7;
    if ((int)((uint)*(byte *)(piVar3 + 2) << 0x1f) < 0) {
      uVar5 = FUN_100eec68(uVar7);
    }
    iVar4 = FUN_100eec8c(uVar5);
    if ((iVar4 == 0) || (iVar4 = FUN_100eee48(uVar5 & 0xff,0), iVar4 != 0)) {
      while( true ) {
        cVar2 = *(char *)((int)piVar3 + 0xb);
        if (cVar2 < 0) {
          *(undefined1 *)((int)piVar3 + 0xb) = 0xff;
          if (*(code **)(*piVar3 + 0x28) == (code *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x100ef0be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar3 + 0x28))(1);
          return;
        }
        iVar4 = FUN_100eec8c((int)cVar2);
        if ((iVar4 != 0) && (iVar4 = FUN_100eee48(cVar2,0), iVar4 == 0)) break;
        *(char *)((int)piVar3 + 0xb) = *(char *)((int)piVar3 + 0xb) + -1;
      }
      return;
    }
  }
  uVar6 = FUN_100eed80(uVar7);
  FUN_100eef90(uVar5,uVar6,1);
  return;
}

