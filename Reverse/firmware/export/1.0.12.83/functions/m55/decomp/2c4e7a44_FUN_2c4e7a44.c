/* FUN_2c4e7a44 @ 0x2c4e7a44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e7a44(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar9 = 1;
  iVar5 = FUN_2c4e9354();
  uVar4 = _LAB_2c4e7b0c;
  uVar3 = _LAB_2c4e7b08;
  (**(code **)(iVar5 + 0x58))(_LAB_2c4e7aec);
  do {
    iVar5 = func_0x2c4ec460(uVar9 & 0xff);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x1a,_LAB_2c4e7b04,_LAB_2c4e7b00,_LAB_2c4e7afc);
    }
    iVar6 = FUN_2c4e9354();
    (**(code **)(iVar6 + 0x58))(_LAB_2c4e7af0,uVar9);
    uVar2 = _LAB_2c4e7af4;
    if (*(char *)(iVar5 + 8) != '\0') {
      iVar8 = 0;
      iVar6 = 0;
      do {
        iVar10 = *(int *)(iVar5 + 4);
        iVar7 = FUN_2c4e9354();
        (**(code **)(iVar7 + 0x58))(uVar3);
        iVar7 = FUN_2c4e9354();
        puVar1 = (undefined4 *)(iVar10 + iVar8);
        iVar8 = iVar8 + 0x24;
        (**(code **)(iVar7 + 0x58))(uVar4,*puVar1);
        iVar7 = FUN_2c4e9354();
        iVar10 = iVar6 + 1;
        (**(code **)(iVar7 + 0x58))(uVar2,iVar6);
        iVar6 = iVar10;
      } while (iVar10 < (int)(uint)*(byte *)(iVar5 + 8));
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 4);
  return _LAB_2c4e7af8;
}

