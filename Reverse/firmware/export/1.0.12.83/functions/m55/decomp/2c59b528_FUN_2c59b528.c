/* FUN_2c59b528 @ 0x2c59b528 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59b528(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  uVar2 = FUN_2c48e738();
  if (param_2 == 0) {
    FUN_2c48e518(0,uVar2,_LAB_2c59b5d8);
    uVar3 = _LAB_2c59b5fc;
  }
  else {
    FUN_2c48e518((int)uRam2c59b5d0,uVar2,_LAB_2c59b5d8);
    uVar3 = _LAB_2c59b5dc;
  }
  FUN_2c48e5b4(uVar2,_LAB_2c59b5e0,uVar3);
  uVar3 = func_0x2c5d68e4();
  FUN_2c48e5b4(uVar2,_LAB_2c59b5e4,uVar3);
  uVar3 = FUN_2c48e3e8(uVar2);
  uVar4 = FUN_2c48e738();
  FUN_2c48e5b4(uVar4,_LAB_2c59b5ec,_LAB_2c59b5e8);
  FUN_2c48e5b4(uVar4,_LAB_2c59b5f0,uVar3);
  piVar5 = (int *)FUN_2c48e738();
  FUN_2c48e5b4(piVar5,_LAB_2c59b5ec,_LAB_2c59b5f4);
  FUN_2c48e474(piVar5,_LAB_2c59b5f8,uVar4);
  uVar4 = FUN_2c48e3e8(piVar5);
  uVar6 = FUN_2c5d78f0();
  FUN_2c5d7cfc(uVar6,uVar4,0);
  FUN_2c48e87c(uVar3);
  FUN_2c48e87c(uVar4);
  FUN_2c48dea0(uVar2);
  iVar1 = DAT_2c48deec;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    piVar8 = (int *)*piVar5;
    iVar7 = piVar5[3];
    if (-1 < iVar7 << 0x17) {
      if (piVar5[2] != 0) {
        FUN_2c48dea0();
        iVar7 = piVar5[3];
        if (iVar7 << 0x17 < 0) goto LAB_2c48dece;
      }
      if (piVar5[4] != 0) {
        (**(code **)(iVar1 + 4))();
        iVar7 = piVar5[3];
      }
    }
LAB_2c48dece:
    if ((-1 < iVar7 << 0x16) && (piVar5[8] != 0)) {
      (**(code **)(iVar1 + 4))();
    }
    (**(code **)(iVar1 + 4))(piVar5);
    piVar5 = piVar8;
    if (piVar8 == (int *)0x0) {
      return;
    }
  } while( true );
}

