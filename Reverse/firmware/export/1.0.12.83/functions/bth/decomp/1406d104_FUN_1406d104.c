/* FUN_1406d104 @ 0x1406d104 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1406d104(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 unaff_lr;
  
  puVar3 = DAT_1406d20c;
  iVar8 = *(int *)(DAT_1406d200 + (param_1 + 0x22) * 4);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406d208,0x1f7,DAT_1406d204);
  }
  piVar7 = *(int **)(iVar8 + 0x30);
  do {
    bVar2 = piVar7 == (int *)0x0;
    piVar4 = piVar7;
    piVar7 = param_3;
    if (bVar2) {
      return;
    }
    do {
      do {
        piVar1 = piVar4;
        if (piVar7 == (int *)0x0) {
          return;
        }
        uVar6 = (uint)*(byte *)((int)piVar1 + 0x11);
        piVar7 = (int *)*piVar1;
        piVar4 = piVar7;
      } while ((-1 < (int)(((uint)param_3 >> (uVar6 & 7)) << 0x1f)) ||
              (((int)((uint)*(byte *)(iVar8 + 0x54) << 0x1f) < 0 &&
               ((uVar6 == 0x28 || (uVar6 == 0x40))))));
      iVar5 = FUN_14066108(*(undefined1 *)((int)piVar1 + 0x13));
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_1406d208,0x20c,DAT_1406d204);
      }
      iVar5 = FUN_14068dec(param_1,param_2,piVar1,*(undefined2 *)(iVar5 + 6));
    } while (iVar5 == 0);
    uVar6 = *(byte *)((int)piVar1 + 0x11) & 7;
    param_3 = (int *)((uint)param_3 & ~(1 << uVar6));
    iVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *puVar3 = 0x1406d188;
      puVar3[1] = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    FUN_14073a6c(iVar8 + 0x30,piVar1,uVar6,0x40);
    FUN_14073a28(iVar8 + 0x28,piVar1);
    if (iVar5 == 0) {
      *puVar3 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar5);
    }
    *(byte *)((int)piVar1 + 0x12) = *(byte *)((int)piVar1 + 0x12) & 0xf0 | 1;
    FUN_14058748(piVar1 + 2,0);
  } while( true );
}

