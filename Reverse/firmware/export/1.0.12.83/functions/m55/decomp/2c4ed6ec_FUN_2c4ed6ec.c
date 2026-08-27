/* FUN_2c4ed6ec @ 0x2c4ed6ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ed6ec(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_2c4ee058(param_1,0);
  *_LAB_2c4ed714 = uVar4;
  uVar5 = FUN_2c4ee058(param_1,0);
  *_LAB_2c4ed718 = (int)uVar5;
  puVar1 = (undefined4 *)FUN_2c4e94fc(0,(int)((ulonglong)uVar5 >> 0x20),(int)uVar5,0);
  uVar4 = (*(code *)*puVar1)();
  iVar2 = FUN_2c4e94fc();
  uVar3 = (**(code **)(iVar2 + 0x18))();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x34,_LAB_2c4ed6c4,_LAB_2c4ed6c0,_LAB_2c4ed6bc,uVar4,uVar3);
}

