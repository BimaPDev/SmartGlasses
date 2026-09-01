/* FUN_101156e8 @ 0x101156e8 */

uint FUN_101156e8(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*DAT_10115738;
  if (piVar4 == DAT_10115738) {
    piVar4 = (int *)0x0;
  }
  uVar1 = FUN_101156a0();
  if (piVar4 == (int *)0x0) {
    uVar2 = 0x7fffffff;
  }
  else {
    uVar2 = *(uint *)((int)piVar4 + 0x10) - uVar1;
    iVar3 = (*(int *)((int)piVar4 + 0x14) - ((int)uVar1 >> 0x1f)) -
            (uint)(*(uint *)((int)piVar4 + 0x10) < uVar1);
    if (iVar3 < (int)(uint)(uVar2 == 0)) {
      uVar2 = 0;
    }
    else if ((int)(-(uint)(0x7fffffff < uVar2) - iVar3) < 0 !=
             (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)(0x7fffffff < uVar2)))) {
      uVar2 = 0x7fffffff;
    }
  }
  uVar1 = *(uint *)(DAT_1011573c + 0x10);
  if ((uVar1 != 0) && ((int)uVar1 <= (int)uVar2)) {
    uVar2 = uVar1;
  }
  return uVar2;
}

