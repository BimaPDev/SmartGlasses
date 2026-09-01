/* FUN_100d529c @ 0x100d529c */

undefined4 FUN_100d529c(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = (DAT_100d5434 - DAT_100d5430) * 0x20 & 0xff00;
  iVar1 = param_2;
  iVar8 = param_2;
  FUN_100a5b78(DAT_100d5438 | uVar7,DAT_100d543c,DAT_100d5440,param_1,param_2,param_2);
  piVar5 = (int *)*DAT_100d5444;
  piVar6 = (int *)*piVar5;
  while( true ) {
    if (piVar6 == (int *)0x0) {
      FUN_100a5b78(DAT_100d5448 | uVar7,DAT_100d543c,DAT_100d544c,piVar5,iVar1,iVar8);
      return 0xffffffed;
    }
    piVar5 = (int *)(uint)*(byte *)(piVar6 + 0xe);
    if (((((int)piVar5 << 0x1f < 0) && (param_1 == piVar6[3])) && (-1 < (int)piVar5 << 0x18)) &&
       ((*(byte *)(piVar6 + 0xe) & 0x70) == 0)) break;
    piVar6 = (int *)*piVar6;
  }
  iVar1 = FUN_100d45f8(param_1,((uint)piVar5 & 0x7f) >> 4);
  if (iVar1 == 0) {
    cVar2 = '\x01';
    bVar4 = *(byte *)((int)piVar6 + 0x3b);
  }
  else {
    FUN_100a5b78(DAT_100d5450 | uVar7,DAT_100d543c,DAT_100d5454,piVar6,
                 (*(byte *)((int)piVar6 + 0x3b) & 0x7f) >> 4,*(byte *)((int)piVar6 + 0x43) & 0x3f);
    FUN_100a5b78(DAT_100d5458 | uVar7,DAT_100d543c,DAT_100d545c,iVar1,
                 (*(byte *)(iVar1 + 0x3b) & 0x7f) >> 4,*(byte *)(iVar1 + 0x43) & 0x3f);
    if (param_2 == 0) {
      bVar4 = *(byte *)(iVar1 + 0x3b) & 0x70;
      if (bVar4 == 0x10) {
        bVar4 = *(byte *)((int)piVar6 + 0x3b) & 0x8f;
        goto LAB_100d542a;
      }
      if (bVar4 == 0x20) {
        *(byte *)(iVar1 + 0x3b) = *(byte *)(iVar1 + 0x3b) & 0x8f | 0x10;
        *(byte *)((int)piVar6 + 0x3b) = *(byte *)((int)piVar6 + 0x3b) & 0x8f;
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        goto LAB_100d53b0;
      }
      bVar4 = *(byte *)((int)piVar6 + 0x3b);
      if ((*(byte *)((int)piVar6 + 0x43) & 0x3f) == 0) {
        bVar4 = bVar4 & 0x8f;
        goto LAB_100d542a;
      }
    }
    else {
      if ((6 < (*(char *)((int)piVar6 + 0x43) + 0x3eU & 0x3f)) && (param_3 == 0)) {
        return 0;
      }
      if ((((*(byte *)(iVar1 + 0x3b) & 0x70) != 0x10) ||
          (6 < (*(char *)(iVar1 + 0x43) + 0x3eU & 0x3f))) || (param_3 != 0)) {
        if ((*(byte *)((int)piVar6 + 0x3b) & 0x70) == 0x10) {
          return 0;
        }
        *(byte *)((int)piVar6 + 0x3b) = *(byte *)((int)piVar6 + 0x3b) & 0x8f | 0x10;
        if (6 < (*(char *)(iVar1 + 0x43) + 0x3eU & 0x3f)) {
          *(byte *)(iVar1 + 0x3b) = *(byte *)(iVar1 + 0x3b) & 0x8f;
          return 0;
        }
        *(byte *)(iVar1 + 0x3b) = *(byte *)(iVar1 + 0x3b) & 0x8f | 0x20;
        uVar3 = piVar6[3];
LAB_100d53b0:
        FUN_100d4440(0xcc,0x4e,uVar3);
        return 0;
      }
      bVar4 = *(byte *)((int)piVar6 + 0x3b);
    }
    cVar2 = '\x02';
  }
  bVar4 = bVar4 & 0x8f | cVar2 << 4;
LAB_100d542a:
  *(byte *)((int)piVar6 + 0x3b) = bVar4;
  return 0;
}

