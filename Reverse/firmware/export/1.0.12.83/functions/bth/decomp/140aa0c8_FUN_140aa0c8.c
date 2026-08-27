/* FUN_140aa0c8 @ 0x140aa0c8 */

int FUN_140aa0c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_140aa120;
  FUN_140e5148(*(undefined4 *)(DAT_140aa120 + 0xd0),0xffffffff,param_3,param_4,param_4);
  cVar1 = *(char *)(iVar2 + 0xd8);
  FUN_140e52d8(*(undefined4 *)(iVar2 + 0xd0));
  if (cVar1 == '\x02') {
    FUN_140e5148(*(undefined4 *)(iVar2 + 0xd0),0xffffffff);
    iVar3 = (**(code **)(iVar2 + 0x68))(param_1,param_2);
    if (iVar3 == -0x80) {
      iVar3 = 0;
    }
    FUN_140e52d8(*(undefined4 *)(iVar2 + 0xd0));
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}

