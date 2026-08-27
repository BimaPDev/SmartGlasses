/* FUN_140e41d4 @ 0x140e41d4 */

void FUN_140e41d4(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_140e3750();
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  FUN_140e3800((int)uVar2,uVar1,0,DAT_140e420c);
  FUN_140e3db0();
  uVar3 = FUN_140e370c();
  uVar3 = FUN_140e3800((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,DAT_140e4210);
  FUN_140e3490((int)uVar2,uVar1,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  FUN_140e3db0();
  return;
}

