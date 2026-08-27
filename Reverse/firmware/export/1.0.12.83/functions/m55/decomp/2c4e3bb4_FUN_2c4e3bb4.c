/* FUN_2c4e3bb4 @ 0x2c4e3bb4 */

int FUN_2c4e3bb4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = DAT_2c4e3ba0;
  uVar4 = FUN_2c4e3b34(DAT_2c4e3ba0,DAT_2c4e3bc0,param_1,0,0,param_1);
  iVar2 = FUN_2c4dfe48(uVar1,uVar4);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    if ((*(code **)(iVar2 + 4) != (code *)0x0) && (iVar3 = (**(code **)(iVar2 + 4))(), iVar3 != 0))
    {
      (*(code *)**(undefined4 **)(iVar3 + 0x20))(iVar3 + 0x20,iVar2);
    }
  }
  return iVar3;
}

