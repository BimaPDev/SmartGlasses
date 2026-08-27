/* FUN_1403d390 @ 0x1403d390 */

void FUN_1403d390(int param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_14053e64(0x56);
  puVar2 = (undefined4 *)
           FUN_14074378(0x5604,(uVar1 | param_1 << 8) & 0xffff,param_1 << 8,param_3 + 0x10U & 0xffff
                       );
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(char *)((int)puVar2 + 5) = (char)param_1;
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 2) = param_2;
  *(short *)(puVar2 + 3) = (short)param_3;
  if (param_3 == 0) {
    FUN_140743d0(puVar2);
    return;
  }
  FUN_140e5278((int)puVar2 + 0xe,param_4,param_3);
  FUN_140743d0(puVar2);
  return;
}

