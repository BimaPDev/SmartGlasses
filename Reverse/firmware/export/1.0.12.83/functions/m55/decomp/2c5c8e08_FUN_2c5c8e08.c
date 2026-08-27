/* FUN_2c5c8e08 @ 0x2c5c8e08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c8e08(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  undefined8 uVar7;
  
  piVar2 = (int *)FUN_2c48e738();
  FUN_2c48e5b4(piVar2,_LAB_2c5c8e58,_LAB_2c5c8e54);
  uVar7 = VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar7,piVar2,_LAB_2c5c8e5c);
  uVar3 = FUN_2c48e3e8(piVar2);
  uVar4 = FUN_2c5d78f0();
  FUN_2c5d7cfc(uVar4,uVar3,1);
  FUN_2c48e87c(uVar3);
  iVar1 = DAT_2c48deec;
  if (piVar2 == (int *)0x0) {
    return;
  }
  do {
    piVar6 = (int *)*piVar2;
    iVar5 = piVar2[3];
    if (-1 < iVar5 << 0x17) {
      if (piVar2[2] != 0) {
        FUN_2c48dea0();
        iVar5 = piVar2[3];
        if (iVar5 << 0x17 < 0) goto LAB_2c48dece;
      }
      if (piVar2[4] != 0) {
        (**(code **)(iVar1 + 4))();
        iVar5 = piVar2[3];
      }
    }
LAB_2c48dece:
    if ((-1 < iVar5 << 0x16) && (piVar2[8] != 0)) {
      (**(code **)(iVar1 + 4))();
    }
    (**(code **)(iVar1 + 4))(piVar2);
    piVar2 = piVar6;
    if (piVar6 == (int *)0x0) {
      return;
    }
  } while( true );
}

