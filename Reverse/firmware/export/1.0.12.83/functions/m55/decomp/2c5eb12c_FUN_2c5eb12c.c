/* FUN_2c5eb12c @ 0x2c5eb12c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5eb12c(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = _LAB_2c5eb158;
  FUN_2c6043d8();
  puVar2 = _LAB_2c5eb160;
  pcVar4 = *(code **)(iVar1 + 0x20);
  *_LAB_2c5eb15c = 0;
  *puVar2 = 0;
  iVar3 = (*pcVar4)(0);
  (**(code **)(iVar3 + 0x54))();
                    /* WARNING: Could not recover jumptable at 0x2c5eb152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x2c))(0,4);
  return;
}

