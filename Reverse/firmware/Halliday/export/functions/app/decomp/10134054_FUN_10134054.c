/* FUN_10134054 @ 0x10134054 */

uint FUN_10134054(int param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_2;
  iVar1 = FUN_10133de0(puVar4);
  iVar1 = param_3 + iVar1;
  if ((int)(uint)*(ushort *)(param_1 + 0x5e) < iVar1) {
    uVar2 = 0xffffff86;
  }
  else {
    puVar3 = (uint *)(uint)(ushort)puVar4[3];
    if ((puVar3 == (uint *)0x0) && (puVar3 = (uint *)*puVar4, puVar3 != (uint *)0x0)) {
      puVar4 = puVar3;
    }
    if (param_3 == 0) {
      uVar2 = FUN_100cb748(param_1,puVar4,2,puVar3,param_4);
      if ((int)uVar2 < 0) {
LAB_1013408e:
        if (uVar2 == 0xfffffff5) {
          *(short *)(puVar4 + 5) = (short)param_3;
        }
        *param_2 = (uint)puVar4;
        return uVar2;
      }
      param_3 = uVar2 & 0xffff;
    }
    uVar2 = 0;
    for (; (int)param_3 < iVar1; param_3 = param_3 + uVar2 & 0xffff) {
      if ((short)puVar4[3] == 0) {
        puVar4 = (uint *)FUN_100c1e3c(0,puVar4);
      }
      uVar2 = FUN_100cb748(param_1,puVar4,0);
      if ((int)uVar2 < 0) goto LAB_1013408e;
    }
    FUN_100c1c90(puVar4);
  }
  return uVar2;
}

