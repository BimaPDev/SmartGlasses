/* FUN_2c4ff790 @ 0x2c4ff790 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ff790(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint in_fpscr;
  undefined8 uVar8;
  
  piVar1 = (int *)FUN_2c48e738();
  FUN_2c48e5b4(piVar1,_LAB_2c4ff850,_LAB_2c4ff84c);
  uVar2 = func_0x2c48e638(piVar1,_LAB_2c4ff854);
  iVar6 = (int)*(short *)(*(int *)(param_1 + 0xa0) + 0x1a);
  uVar3 = _LAB_2c4ff858;
  if (iVar6 != 3) {
    uVar3 = _LAB_2c4ff85c;
  }
  FUN_2c48e5b4(uVar2,_LAB_2c4ff850,uVar3,iVar6,param_4);
  uVar3 = FUN_2c48e738();
  uVar8 = VectorSignedToFloat((int)*(short *)(*(int *)(param_1 + 0xa0) + 0x18),
                              (byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar8,uVar3,_LAB_2c4ff860);
  FUN_2c48e5b4(uVar3,_LAB_2c4ff864,*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x30));
  if (*(short *)(*(int *)(param_1 + 0xa0) + 0x1a) == 3) {
    uVar8 = VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x20),
                                (byte)(in_fpscr >> 0x16) & 3);
    FUN_2c48e518((int)uVar8,uVar3,_LAB_2c4ff86c);
  }
  uVar4 = FUN_2c48e3e8(uVar3);
  FUN_2c48e5b4(uVar2,_LAB_2c4ff868,uVar4);
  FUN_2c48e87c(uVar4);
  FUN_2c48dea0(uVar3);
  uVar3 = FUN_2c48e3e8(piVar1);
  uVar2 = FUN_2c5d78f0();
  FUN_2c5d7cfc(uVar2,uVar3,1);
  FUN_2c48e87c(uVar3);
  iVar6 = DAT_2c48deec;
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    piVar7 = (int *)*piVar1;
    iVar5 = piVar1[3];
    if (-1 < iVar5 << 0x17) {
      if (piVar1[2] != 0) {
        FUN_2c48dea0();
        iVar5 = piVar1[3];
        if (iVar5 << 0x17 < 0) goto LAB_2c48dece;
      }
      if (piVar1[4] != 0) {
        (**(code **)(iVar6 + 4))();
        iVar5 = piVar1[3];
      }
    }
LAB_2c48dece:
    if ((-1 < iVar5 << 0x16) && (piVar1[8] != 0)) {
      (**(code **)(iVar6 + 4))();
    }
    (**(code **)(iVar6 + 4))(piVar1);
    piVar1 = piVar7;
    if (piVar7 == (int *)0x0) {
      return;
    }
  } while( true );
}

