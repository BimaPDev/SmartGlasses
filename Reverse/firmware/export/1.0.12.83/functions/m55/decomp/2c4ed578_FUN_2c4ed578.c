/* FUN_2c4ed578 @ 0x2c4ed578 */

void FUN_2c4ed578(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_2c4ee058(param_1,0);
  *puRam2c4ed5a0 = uVar3;
  uVar4 = FUN_2c4ee058(param_1,0);
  *DAT_2c4ed5a4 = (int)uVar4;
  iVar1 = FUN_2c4e94fc(0,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4,0);
  uVar3 = (**(code **)(iVar1 + 0xc))(0);
  iVar1 = FUN_2c4e94fc();
  uVar2 = (**(code **)(iVar1 + 0xc))(1);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x29,DAT_2c4ed558,DAT_2c4ed554,DAT_2c4ed550,uVar3,uVar2);
}

