/* FUN_14048ac8 @ 0x14048ac8 */

uint FUN_14048ac8(code *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  short local_1e;
  
  iVar1 = FUN_14050350();
  if (iVar1 == 0) {
    if ((param_2 & 0xff) != 0) {
      FUN_140489b8(param_3,0,0,0,param_1);
      return param_2 & 0xff;
    }
    local_1e = (short)(param_2 >> 0x10);
    puVar2 = (undefined4 *)thunk_FUN_14096d18((local_1e + 3U & 0xfffc) + 0x10);
    uVar3 = FUN_140e5278(puVar2 + 4,param_3,local_1e);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[1] = 0;
    *puVar2 = uVar3;
    FUN_14048a20(param_1,puVar2);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if (param_4 != 0) {
      (*param_1)(param_3,0,0);
      return 0;
    }
  }
  return uVar4;
}

