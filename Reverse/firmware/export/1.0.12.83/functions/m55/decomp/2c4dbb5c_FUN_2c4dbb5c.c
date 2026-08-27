/* FUN_2c4dbb5c @ 0x2c4dbb5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c4dbb5c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = FUN_2c4dfd0c(_LAB_2c4dbbb4);
  piVar2 = _LAB_2c4dbbc0;
  uVar8 = FUN_2c4dfd0c(_LAB_2c4dbbb8);
  uVar9 = FUN_2c4dfd08(0,0);
  uVar10 = FUN_2c4dfd08(0,0);
  iVar3 = func_0x2c4dff60(piVar2,(int)((ulonglong)uVar10 >> 0x20),(int)uVar7,
                          (int)((ulonglong)uVar7 >> 0x20),uVar8,uVar9,uVar10);
  iVar1 = _LAB_2c4dbbbc;
  iVar5 = 1;
  while( true ) {
    if (piVar2[1] <= iVar5) {
      FUN_2c4e0504(_LAB_2c4dfe3c,7,0,0,_LAB_2c4dfe44,0x77,_LAB_2c4dfe40,0x1300,_LAB_2c4dfe38,iVar3,
                   _LAB_2c4dbbbc);
      return (int *)0x0;
    }
    piVar4 = (int *)(*piVar2 + iVar5 * 8);
    iVar6 = *(int *)(*piVar2 + iVar5 * 8);
    if ((iVar6 == 0) || (iVar6 == iVar3)) break;
    iVar5 = iVar5 + 1;
  }
  *piVar4 = iVar3;
  piVar4[1] = iVar1;
  return piVar4;
}

