/* FUN_2c5c826c @ 0x2c5c826c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c826c(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  iVar3 = FUN_2c478b68();
  puVar1 = _LAB_2c5c82b4;
  if (iVar3 != 0) {
    uVar4 = (**(code **)(iVar3 + 8))();
    pcVar5 = *(code **)(iVar3 + 0x100);
    *puVar1 = uVar4;
    uVar2 = (*pcVar5)();
    *(undefined1 *)(param_1 + 0x22) = uVar2;
    (**(code **)(iVar3 + 0x104))(_LAB_2c5c82b8);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c82c4,0x6c,_LAB_2c5c82c0,_LAB_2c5c82bc,*puVar1,
                 *(undefined1 *)(param_1 + 0x22));
  }
  return;
}

