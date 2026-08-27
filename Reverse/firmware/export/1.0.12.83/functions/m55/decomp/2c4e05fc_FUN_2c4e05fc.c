/* FUN_2c4e05fc @ 0x2c4e05fc */

int FUN_2c4e05fc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = FUN_2c4dfd0c(DAT_2c4e0654);
  uVar6 = FUN_2c4dfd0c(param_1);
  uVar1 = DAT_2c4e0658;
  uVar7 = FUN_2c4dfd08(0,0);
  uVar8 = FUN_2c4dfd08(0,0);
  uVar4 = FUN_2c4dff04(uVar1,(int)((ulonglong)uVar8 >> 0x20),(int)uVar5,
                       (int)((ulonglong)uVar5 >> 0x20),uVar6,uVar7,uVar8);
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

