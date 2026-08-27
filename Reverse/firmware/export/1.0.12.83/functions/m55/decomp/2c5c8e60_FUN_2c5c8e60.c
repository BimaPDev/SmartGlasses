/* FUN_2c5c8e60 @ 0x2c5c8e60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c8e60(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  undefined8 uVar7;
  
  iVar3 = FUN_2c63c57c();
  if (((iVar3 - 2U & 0xff) < 2) || (iVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    FUN_2c5210a8();
    FUN_2c5210fc();
    uVar4 = 1;
  }
  piVar1 = (int *)FUN_2c48e738();
  FUN_2c48e5b4(piVar1,_LAB_2c5c8e58,_LAB_2c5c8e54);
  uVar7 = VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar7,piVar1,_LAB_2c5c8e5c);
  uVar4 = FUN_2c48e3e8(piVar1);
  uVar2 = FUN_2c5d78f0();
  FUN_2c5d7cfc(uVar2,uVar4,1);
  FUN_2c48e87c(uVar4);
  iVar3 = DAT_2c48deec;
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    piVar6 = (int *)*piVar1;
    iVar5 = piVar1[3];
    if (-1 < iVar5 << 0x17) {
      if (piVar1[2] != 0) {
        FUN_2c48dea0();
        iVar5 = piVar1[3];
        if (iVar5 << 0x17 < 0) goto LAB_2c48dece;
      }
      if (piVar1[4] != 0) {
        (**(code **)(iVar3 + 4))();
        iVar5 = piVar1[3];
      }
    }
LAB_2c48dece:
    if ((-1 < iVar5 << 0x16) && (piVar1[8] != 0)) {
      (**(code **)(iVar3 + 4))();
    }
    (**(code **)(iVar3 + 4))(piVar1);
    piVar1 = piVar6;
    if (piVar6 == (int *)0x0) {
      return;
    }
  } while( true );
}

