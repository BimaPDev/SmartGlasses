/* FUN_10129d1e @ 0x10129d1e */

uint FUN_10129d1e(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0xff - param_3;
  return ((param_3 * (param_1 & 0x1f) + iVar1 * (param_2 & 0x1f)) * 0x8081 + 0x404080 & 0xfffffff)
         >> 0x17 | (((param_3 * ((param_1 & 0x7ff) >> 5) + iVar1 * ((param_2 & 0x7ff) >> 5)) *
                     0x8081 + 0x404080 & 0x1fffffff) >> 0x17) << 5 |
         ((param_3 * ((param_1 & 0xffff) >> 0xb) + ((param_2 & 0xffff) >> 0xb) * iVar1) * 0x8081 +
          0x404080 >> 0x17) << 0xb;
}

